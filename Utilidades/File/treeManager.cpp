#include <windows.h>
#include <iostream>
#include "treeManager.h"

static int dlevel = 1;

void showTree(int _level, char *_dname) {
	char buf[512];
	memset(buf, 0x00, sizeof(buf));
	memset(buf, ' ', _level * 3);

	int i;
	for (i = 0; i<_level * 3; i += 3)
		buf[i] = '|';
	buf[i - 1] = buf[i - 2] = '_';

	printf("\n%s%s", buf, _dname);
	fflush(stdout);
}

utils::CFolder::CFolder(CTreeManager *tree, char *current) : m_tree(tree) {
	SetCurrentDirectory(current);

	std::string s = current;
	int len = s.length();

	if (s.compare(len - 1, len, "\\"))
		s += "\\";
	s += "*.*";
	//s += m_tree->m_mask;

	Hnd = FindFirstFile(s.c_str(), &WFD);
	if (Hnd == INVALID_HANDLE_VALUE) {
		std::cout << "File/Folder NOT found!\n";
		return;
	}
	walkdir();
};

void utils::CFolder::walkdir() {
	char fullPath[512];//MAX_PATH];
	do { // loop throught the current directory
		GetCurrentDirectory(512, fullPath);
		// Put a '\' char when needed:
		if (strncmp(&fullPath[strlen(fullPath) - 1], "\\", 1))
			strcat_s(fullPath, 512, "\\");
			//strcat(fullPath, "\\");
		
		// Create full path:
		//strcat(fullPath, WFD.cFileName);
		strcat_s(fullPath, 512, WFD.cFileName);
		// Directory:
		if ((WFD.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) &&
			(strcmp(WFD.cFileName, "..") && strcmp(WFD.cFileName, "."))) {
			dlevel++;
			if (m_tree->m_show)
				showTree(dlevel, WFD.cFileName);
			m_tree->m_folders.push_back(fullPath);//WFD.cFileName);
			// Walk SUBDIRECTORIES:
			if (m_tree->m_sub)
				CFolder folder(m_tree, fullPath);
			dlevel--;
			// Go back one level
			SetCurrentDirectory("..");
		}
		else // File:
		if ((strcmp(WFD.cFileName, "..") && strcmp(WFD.cFileName, "."))) { // Skip this kinda files
			// Sortin' by tha mask:				
			std::string ext = WFD.cFileName;
			int pos = ext.find_last_of(".");
			char buffer[512] = ext.c_str();
			//strlwr((char *)ext.c_str());
			//_strlwr_s((char *)ext.c_str(), );
			// Se *todas ou a máscara passa:
			if ((m_tree->m_mask[0] == '*') || (!ext.substr(pos + 1).compare(m_tree->m_mask))) {
				m_tree->m_files.push_back(fullPath);//WFD.cFileName);
				//m_tree->m_files.push_back(WFD.cFileName);
				dlevel++;
				if (m_tree->m_show)
					showTree(dlevel, WFD.cFileName);
				dlevel--;
			}
		}
	} while (FindNextFile(Hnd, &WFD));
	FindClose(Hnd);
}

