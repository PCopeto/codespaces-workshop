# Unit Converter CLI App

## Overview
This is a simple C++ command line application that converts between centimeters and inches.

## How to Build
Build the app using Makefile:

```bash
make build
```
Or directly with g++:
```bash
g++ main.cpp -o unit_converter
```

## How to Run
Run the app interactively:

```bash
make run
```
Or directly:
```bash
./unit_converter
```
At the prompt, enter commands like:
- cm-to-inch 10
- inch-to-cm 5
- help
- exit

## How to Test
Run all tests:
```bash
make test
```
This will build the app and run the test_app.sh script.

# Hands-on-Exercise

## Setup: Prepare your workspace

For instructions on forking a repository, see the [GitHub Docs](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo#forking-a-repository).

1. Fork this repository on GitHub (click the "Fork" button at the top right of the repo page).
2. Create a Codespace from your fork (use the green "Code" button and select "Create codespace on main").
3. Add the original repository as an upstream remote:
   ```bash
   git remote add upstream https://github.com/leonor-loureiro/codespaces-workshop.git
   ```
4. Sign in to GitHub Copilot, if not already signed-in:
    * Click the Copilot symbol in the status bar (bottom tray) and follow the prompts, **or**
    * Open the Command Palette (press `F1` or `Ctrl+Shift+P`), type and select **"Copilot: Sign In"**.
    * Follow the prompts to authenticate with your GitHub account.

## Exercise 1: Create a `devcontainer` for the repository

For an introduction to dev containers, see the [GitHub Docs](https://docs.github.com/en/codespaces/setting-up-your-project-for-codespaces/adding-a-dev-container-configuration/introduction-to-dev-containers#using-a-predefined-dev-container-configuration).

1. Create a `devcontainer` configuration for the repository using the C++ template.
2. Rebuild the Codespace to pick up the new config. Use a full rebuild since the base image has changed.
3. Add the GitLens extension to the devcontainer.
4. Update the `.devcontainer/Dockerfile` to install the `clang-format` package.
5. Rebuild the container to pick up the changes.

## Exercise 2: Extend the unit_convert CLI using Copilot

For a quickstart guide to GitHub Copilot, see the [GitHub Copilot Quickstart](https://docs.github.com/en/copilot/get-started/quickstart?versionId=free-pro-team%40latest&productId=pull-requests&restPage=collaborating-with-pull-requests%2Cworking-with-forks%2Cfork-a-repo).

1. Use Copilot's Ask mode to get an explanation of the current main.cpp file.
2. Create a new branch for your changes:
   ```bash
   git checkout -b my-feature-branch
   ```
3. Using Copilot's Edit mode, refactor the command parsing logic for better readability before adding a new command.
4. Using the Copilot Agent mode, add a new command to the unit converter CLI app.
5. After adding your new command, use Copilot's Review mode to get a code review of your changes and suggestions for improvement.

## Exercise 3: Open a Pull Request

For instructions on creating a pull request, see the [GitHub Docs: Creating a pull request](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request?tool=webui).

1. Push your changes to your fork on GitHub.
   ```bash
   git push origin my-feature-branch
   ```
2. Open a pull request from your new branch in your fork to the upstream repository's main branch.
3. Follow the prompts to describe your changes and submit the pull request for review.


