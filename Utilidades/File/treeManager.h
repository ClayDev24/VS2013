#pragma once
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include "..\Utilidades\_showVetor.h"

namespace utils {
	// Forward class declaration:
	class CTreeManager;

	class CFolder {
		CTreeManager   *m_tree;
		HANDLE          Hnd;
		WIN32_FIND_DATA WFD;
		void walkdir();
	public:
		CFolder(CTreeManager *tree, char *current = "\\");
		~CFolder() {};
		void displayTree(int level, char *dname);
	};

	class CTreeManager {

		friend class CFolder;
		vetorStr m_files;
		vetorStr m_folders;
		bool     m_sub;
		bool     m_show;
		unsigned int m_index;
		char*    m_mask;
		bool bounds() {
			if (m_index >= 0 && m_index < m_files.size())
				return true;
			else
				return false;
		}
	public:
		CTreeManager(char *current, bool _sub, bool _show, char *mask = "*") :m_index(0), m_sub(_sub), m_show(_show), m_mask(mask) {
			CFolder(this, current);
		}

		inline int  totalFiles()     { return m_files.size(); }
		inline int  totalFolders()   { return m_folders.size(); }
		inline void rewind()         { m_index = 0; }
		inline vetorStr getFiles()   { return m_files; }
		inline vetorStr getFolders() { return m_folders; }
	};
	// ***************** <<_USAGE_>> *****************
	static void cTreeManagerUsage() {
		using namespace std;
		//CTreeManager tree("C:\\", true, true, "*");
		//CTreeManager tree("I:\\Teste", true, true, "txt");
		CTreeManager tree("F:", true, true, "*"); // (folder, subfolder, show, mask)
		vetorStr files = tree.getFiles();
		vetorStr folders = tree.getFolders();

		utils::_showVetor(files);
		//utils::_showVetor(folders);

		cout << "\ntotalFiles  : " << files.size() << endl;

		cout << "totalFolders: " << folders.size() << endl;
	}

} //utils