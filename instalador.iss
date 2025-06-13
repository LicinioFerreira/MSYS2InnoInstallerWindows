[Setup]
AppName=Jogo
AppVersion=1.0
DefaultDirName={pf}\Jogo
DefaultGroupName=Jogo
OutputBaseFilename=Instalador_Jogo
Compression=lzma
SolidCompression=yes

[Files]
Source: "C:\Users\test2\Desktop\OOP\jogo.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\test2\Desktop\OOP\*.dll"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs
; Adicione outras DLLs ou arquivos se necessário
; Source: "C:\Users\test2\Desktop\OOP\*.dll"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\Jogo"; Filename: "{app}\jogo.exe"
Name: "{commondesktop}\Jogo"; Filename: "{app}\jogo.exe"; Tasks: desktopicon

[Tasks]
Name: "desktopicon"; Description: "Criar atalho na Área de Trabalho"; GroupDescription: "Opções adicionais:"
