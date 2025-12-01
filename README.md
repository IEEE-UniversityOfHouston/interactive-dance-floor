# interactive-dance-floor
An interactive dance floor to showcase at IEEE@UH's annual Chili Cook Off. Set for Spring 2026.

## 📁 Tentative File Structure
```
interactive-dance-floor/
├── wiring/                     # will start with a rough sketch, then a KiCad project.
├── code/                       # more detailed contribution process outlined below
│   ├── "filename_YOURNAME.ino"
│   └── main.ino     
├── assembly/                   # All relevant CAD files.       
└── README.md                   # This file.                               

```

## Contribution Workflow (for IEEE@UH PW Committee Members)
Before we leave for Winter Break, we will provide you all with Arduinos and your own proto-tile.

### Programming
When you want to start programming your proto-tile(s), create a fork of this repository. Please use a branch name like `feat-yourname-tilecode`.

To begin modifying files in your fork, enter this in your terminal:

```
git clone <url-to-your-fork>
cd interactive-dance-floor
```
and create a new file under `code/` named `filename_YOURNAME.ino`, where `filename` is a name of your choosing (please be appropriate).

Then, you can create a pull request to add your own file to this main repository.

Note: `main.ino` is the unified file that will eventually merge all contributions. Individual `.ino` files remain separate until integration.

### Wiring, Assembly, etc.
Similar to Programming workflow, just make sure your branch name is relevant.

Examples: `feat-yourname-schematic`, `feat-yourname-pcb`, `feat-yourname-assembly`. If you want to contribute to these aspects, please contact kennyspezi on discord.

## TODO:
- Add proto-tile wiring diagram
- Add template `main.ino`
- Decide on a microcontroller?

If you have questions, please contact kennyspezi on discord.