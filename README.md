
# OperatingSystems
# Linux, Shell, and C Lab

## Overview
This repository contains my work for the Ubuntu Linux, shell scripting,
and C programming lab.

## Structure
- `command-line/`: Logs from command-line tasks (e.g., `easy-log.txt`, `intermediate-log.txt`, `advanced-log.txt`).
- `shell-scripts/`: Shell scripts for automation (e.g., `easy-script.sh`, `file-check.sh`, `advanced.sh`, `backup.sh`, `project.sh`).
- `c-programs/`: C programs with compilation artifacts (e.g., `easy-c.c`, `conditionals.c`, `factorial.c`, `contacts.c`).

## Testing and Running
- **Command Line:** Used `ls`, `cd`, `chmod`, `top`, `ps`, pipes/redirects, etc., in Codespaces. See logs such as `easy-log.txt`.
- **Shell Scripts:** Ran `easy-script.sh`, `file-check.sh`, and `advanced.sh` (loop, functions, variables). Verified output and created screenshots.
- **C Programs:** Compiled with `gcc` (e.g., `gcc easy-c.c -o hello && ./hello`). Ran `contacts.c` to create `c-programs/contacts.txt`.
- **Project:** `project.sh` compiles and runs `contacts.c`, archives `c-programs/*` into `contacts-backup.tar.gz`, and appends a timestamp to `project-log.txt`.

## Challenges and Learnings
- Learned Git commits and branching; practiced debugging C with `-g` and careful compile/run paths.
- Main challenges: file permissions (`chmod +x`) and getting paths right when compiling/running from the repo root.
