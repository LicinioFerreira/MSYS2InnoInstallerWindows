# MSYS2InnoInstallerWindows

OOP in C++:
Install msys2 on Windows
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-python-mingw-ldd
https://www.msys2.org/
https://jrsoftware.org/isinfo.php


<p align="center">
  <img src="https://github.com/user-attachments/assets/742a10a7-7b81-4e8a-85f7-358ebd57b464" alt="1" width="400" />
</p>

<p align="center"><strong>Figure 1.</strong> Install MSYS2 on Windows 11.</p>


![image](https://github.com/user-attachments/assets/aa55e989-ace5-4740-90f7-a144d3201f28)

Figure 2. After installing MSYS2.

![image](https://github.com/user-attachments/assets/57cd2b4d-6d02-4812-8cac-5b676ef75943)

Figure 3. Mini Project in C++, it is a game.

1. Change the directory;
2. Lists all files;
3. Compile the project using g++;
4. Visualize the dependencies between files (Objects - *.o);
5. Visualize the dependencies of main.cpp;
6. Visualize the dependencies of DLL files using the following command: ldd

![image](https://github.com/user-attachments/assets/bc9db04d-ad01-4bcf-abd1-29c3e179d4ca)

Figure 4. After detecting all DLL files in the system (Windows 11 + MSYS2), these were moved to the project folder.


![image](https://github.com/user-attachments/assets/acc37b3d-7e44-486f-b638-16db4febf723)

Figure 5. Project Folder before and after moving the DLL files.

![image](https://github.com/user-attachments/assets/e09dee8b-950f-4868-aac1-3779677ac025)

Figure 6. Installing the Inno Setup 6 to create an installer of this miniproject.

![image](https://github.com/user-attachments/assets/09d44549-d09c-4db2-9767-4ce83b1d94fa)

Figure 7. Scripting in inno to create an installer.


![image](https://github.com/user-attachments/assets/a08b5f6a-ae33-4ce9-a5ac-6c12ccdc374c)

Figure 9. Scripting in inno to create an installer.










