# Git Commands Used

| Command | Purpose |
|---|---|
| `git init` | Creates a new local Git repository. |
| `git status` | Shows changed, staged, and untracked files. |
| `git add .` | Stages the current changes. |
| `git add README.md` | Stages a specific file. |
| `git commit -m "message"` | Saves staged changes with a descriptive message. |
| `git log --oneline` | Shows a compact commit history. |
| `git branch` | Lists local branches. |
| `git switch -c feature-name` | Creates and switches to a new branch. |
| `git switch main` | Switches to the main branch. |
| `git merge feature-name` | Merges the named branch into the current branch. |
| `git remote add origin URL` | Adds the GitHub repository as a remote. |
| `git remote -v` | Lists configured remote repositories. |
| `git push -u origin main` | Pushes the main branch to GitHub and sets its upstream. |
| `git pull` | Fetches and integrates changes from the remote branch. |

## Commit history

The local repository is initialized with descriptive commits for the assignment files. Run `git log --oneline` to inspect them.

## Typical workflow

1. Run `git status` to inspect changes.
2. Use `git add` to stage the files.
3. Use `git commit -m "Describe the change"` to save a commit.
4. Use `git push` to send commits to GitHub.
