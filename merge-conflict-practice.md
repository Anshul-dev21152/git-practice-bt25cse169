# Merge Conflict Practice Record

A merge conflict can happen when two branches change the same part of a file and Git cannot decide which version should be kept automatically.

## Practice scenario

For practice, imagine that the `main` branch and a feature branch both edit the same line in `README.md`. Merging the feature branch can produce a conflict.

## How to resolve it

1. Run `git status` to identify the conflicted file.
2. Open the file and find the conflict markers: `<<<<<<<`, `=======`, and `>>>>>>>`.
3. Decide which content should remain, or combine the two versions.
4. Remove the conflict markers.
5. Save the file and review the final content.
6. Run `git add README.md`.
7. Run `git commit` to complete the merge.

## Record

This document describes a reproducible practice scenario and the resolution steps. Replace this note with the details of an actual conflict if one occurs while completing the assignment.
