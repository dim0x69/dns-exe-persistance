// Folgender ifdef-Block ist die Standardmethode zum Erstellen von Makros, die das Exportieren 
// aus einer DLL vereinfachen. Alle Dateien in dieser DLL werden mit dem WIN32PROJECT1_EXPORTS-Symbol
// (in der Befehlszeile definiert) kompiliert. Dieses Symbol darf für kein Projekt definiert werden,
// das diese DLL verwendet. Alle anderen Projekte, deren Quelldateien diese Datei beinhalten, erkennen 
// WIN32PROJECT1_API-Funktionen als aus einer DLL importiert, während die DLL
// mit diesem Makro definierte Symbole als exportiert ansieht.
#ifdef WIN32PROJECT1_EXPORTS
#define WIN32PROJECT1_API __declspec(dllexport)
#else
#define WIN32PROJECT1_API __declspec(dllimport)
#endif

// Diese Klasse wird aus Win32Project1.dll exportiert.
class WIN32PROJECT1_API CWin32Project1 {
public:
	CWin32Project1(void);
	// TODO: Hier die Methoden hinzufügen.
};

extern WIN32PROJECT1_API int nWin32Project1;

WIN32PROJECT1_API int fnWin32Project1(void);
