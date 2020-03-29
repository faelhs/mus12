This EXE is useless if a launcher license has not been applied to the customer.

After purchasing a license, restart your ConnectServer, then LauncherServer - and launcher will be activated.

List of needed files and where to put them:
"x64.dll" -> Same folder as Launcher.exe
"x86.dll" -> Same folder as Launcher.exe
"Settings" -> "Data\Launcher\"
"cVersion" -> "Data\"
"Graphics" -> "Data\Launcher\Design\"
"Animacon" -> "Data\Launcher\Design\"
LanguageFiles -> "Data\Launcher\Languages\"

IMPORTANT NOTE:
In "Settings" file you have to make sure that you applied correct IP and PORT to connect to the LauncherServer,
This is essential as launcher is checking for license with encrypted connection to LauncherServer. 
Any fail in LauncherServer check, and launcher will not open without any noitce of an error.