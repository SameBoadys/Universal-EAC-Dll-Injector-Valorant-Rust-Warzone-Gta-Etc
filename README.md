###  DLL Injector Cheat C++


This is a DLL inject tool that runs on Windows operating systems. This tool is used to inject a specified DLL file into the memory of a target process.

- Note: A crucial initial consideration is the "MAIN" function; it's essential for the successful execution of any module within the DLL. The "MAIN" function requires only one mandatory argument: the HINSTANCE of the DLL. While you can choose to disregard it, keep in mind that it is necessary for utilizing WinAPI functions and performing various tasks.

## How To Use 
1. Clone the project to your computer or download it as a ZIP file.
2. Open the solution file (.sln).
3. Select **Build Solution** from the **Build** menu or press `Ctrl+Shift+B` to compile the project.
4. Run the program.


## Features

- **Select file from dialog**
  Description: Allows you to select a file using a dialog box.

- **Iterates all windows in one click**
  Description: Easily iterate through all open windows with a single click.

- **Copy the window title of any window**
  Description: Copy the title of any window for reference.

- **Allows minimizing the window to the system tray area**
  Description: Minimize the application to the system tray for convenience.

- **And, of course, it can inject x86 DLLs into x86 processes**
  Description: Injection of x86 DLLs into x86 processes is fully supported.


## Media 

![image](https://user-images.githubusercontent.com/105746452/169075924-e49fb0f3-dbb0-48bf-b414-787ab23ea15f.png)

## Disclaimer 

This source code is for educational purposes only. It's created to explore reverse engineering without impacting other gamers' experiences.

## License

This project is licensed under the MIT. For more information, see the [License](LICENSE).

