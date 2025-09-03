
````markdown
# 🐱 Meow-on-Signal

A fun little C project to explore **signals** and **inter-process communication (IPC)**.  
This program prints a `"Subscribe..."` message in a loop, reacts to **Ctrl+C** by playing a sound, and can be exited cleanly by pressing **q**.

---

## ✨ Features
- Runs continuously, printing a message.
- Handles `SIGINT` (`Ctrl+C`) → plays `meow.mp3` instead of terminating.
- Press `q` + Enter to quit gracefully.
- Uses **SDL2** and **SDL2_mixer** for audio playback.
- Cross-platform exploration (tested on **Windows MSYS2/MinGW64**).

---

## 🛠️ Requirements
- [MSYS2](https://www.msys2.org/) (for Windows users)
- SDL2 development libraries
- SDL2_mixer development libraries
- GCC compiler (`mingw-w64-x86_64-gcc`)

---

## ⚙️ Build & Run

### Compile
```bash
gcc -o program_a program_a.c play_audio.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer
````

### Run

```bash
./program_a
```

---

## 🎮 Usage

* The program prints:

  ```
  Subscribe...
  ```
* Press **Ctrl+C** → Plays `meow.mp3` 🐱
* Press **q + Enter** → Exits cleanly.

---

## 📂 Project Structure

```
.
├── program_a.c        # Main program (signal handling + message loop)
├── play_audio.c       # Audio utility functions
├── play_audio.h       # Audio function declarations
├── meow.mp3           # Example sound file (not included in repo)
└── README.md
```

---

## 📖 MSYS2 Setup on Windows

<details>
<summary>Click to expand setup instructions</summary>

### 1. Install MSYS2

* Download installer from [https://www.msys2.org/](https://www.msys2.org/)
* Run installer and let it update.

### 2. Open MSYS2 MinGW64 terminal

* Start Menu → search **MSYS2 MinGW64**
* Your prompt should look like:

  ```
  username@PC MINGW64 ~
  ```

### 3. Update packages

```bash
pacman -Syu
```

*(Close and reopen MSYS2 MinGW64 terminal if asked.)*

### 4. Install dependencies

```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_mixer
```

### 5. Navigate to your project

```bash
cd /c/projects/githubprojects/Meow/program_a
```

### 6. Compile & Run

```bash
gcc -o program_a program_a.c play_audio.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer
./program_a
```

</details>

---

## 🙏 Credits

This project was inspired by hands-on experiments with **signals** and **SDL2**.
It is partly based on / adapted from the following repository:

> **Original Repository Template:**
>
> * Repo: [program_a](Got it 👍 — here’s a **complete `README.md`** written in Markdown format (inside a code block), with a **toggle section** for step-by-step MSYS2 installation instructions on Windows.

---

````markdown
# 🐱 Meow-on-Signal

A fun little C project to explore **signals** and **inter-process communication (IPC)**.  
This program prints a `"Subscribe..."` message in a loop, reacts to **Ctrl+C** by playing a sound, and can be exited cleanly by pressing **q**.

---

## ✨ Features
- Runs continuously, printing a message.
- Handles `SIGINT` (`Ctrl+C`) → plays `meow.mp3` instead of terminating.
- Press `q` + Enter to quit gracefully.
- Uses **SDL2** and **SDL2_mixer** for audio playback.
- Cross-platform exploration (tested on **Windows MSYS2/MinGW64**).

---

## 🛠️ Requirements
- [MSYS2](https://www.msys2.org/) (for Windows users)
- SDL2 development libraries
- SDL2_mixer development libraries
- GCC compiler (`mingw-w64-x86_64-gcc`)

---

## ⚙️ Build & Run

### Compile
```bash
gcc -o program_a program_a.c play_audio.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer
````

### Run

```bash
./program_a
```

---

## 🎮 Usage

* The program prints:

  ```
  Subscribe...
  ```
* Press **Ctrl+C** → Plays `meow.mp3` 🐱
* Press **q + Enter** → Exits cleanly.

---

## 📂 Project Structure

```
.
├── program_a.c        # Main program (signal handling + message loop)
├── play_audio.c       # Audio utility functions
├── play_audio.h       # Audio function declarations
├── meow.mp3           # Example sound file (not included in repo)
└── README.md
```

---

## 📖 MSYS2 Setup on Windows

<details>
<summary>Click to expand setup instructions</summary>

### 1. Install MSYS2

* Download installer from [https://www.msys2.org/](https://www.msys2.org/)
* Run installer and let it update.

### 2. Open MSYS2 MinGW64 terminal

* Start Menu → search **MSYS2 MinGW64**
* Your prompt should look like:

  ```
  username@PC MINGW64 ~
  ```

### 3. Update packages

```bash
pacman -Syu
```

*(Close and reopen MSYS2 MinGW64 terminal if asked.)*

### 4. Install dependencies

```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-SDL2 mingw-w64-x86_64-SDL2_mixer
```

### 5. Navigate to your project

```bash
cd /c/projects/githubp/Meow/program_a
```

### 6. Compile & Run

```bash
gcc -o program_a program_a.c play_audio.c -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer
./program_a
```

</details>

---

## 🙏 Credits

This project was inspired by hands-on experiments with **signals** and **SDL2**.
It is adapted from the following repository:

> **Original Repository Template:**
>
> * Repo: [original-repo-name](https://github.com/jdvillal/program_a)
> * Author: [Jorge Villalta](https://github.com/jdvillal)




---




