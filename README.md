# Debugging Practice Repository

Welcome! This repository contains 120 faulty programs across 4 programming languages for debugging practice.

## 📁 Repository Structure

- **python/** - 30 Python programs with errors
- **c/** - 30 C programs with errors
- **cpp/** - 30 C++ programs with errors
- **java/** - 30 Java programs with errors

Each file is numbered (01-30) and named according to the type of error it contains.

## 🎯 How to Participate

### Step 1: Fork and Clone the Repository

```bash
# Fork the repository on GitHub first (click the Fork button)

# Clone YOUR forked repository
git clone https://github.com/YOUR_USERNAME/PRs.git
cd PRs
```

### Step 2: Create a New Branch

Create a branch with your name and the file you're fixing:

```bash
# Format: yourname-language-filenumber
git checkout -b john-python-01
```

Examples:
- `alice-c-05`
- `bob-java-12`
- `sarah-cpp-20`

### Step 3: Fix the Error

1. Open the file you want to fix
2. Read the comment at the top (it hints at the error type)
3. Identify and fix the error
4. Test your fix to ensure the program runs correctly

### Step 4: Commit Your Changes

```bash
# Stage the fixed file
git add python/01_missing_colon.py

# Commit with a descriptive message
git commit -m "Fix: Added missing colon in function definition (python/01)"
```

### Step 5: Push to Your Fork

```bash
# Push your branch to your forked repository
git push origin john-python-01
```

### Step 6: Create a Pull Request

1. Go to your forked repository on GitHub
2. Click "Compare & pull request" button
3. Write a clear PR title: `Fix: [Language] File #XX - Brief description`
4. In the PR description, explain:
   - What was the error?
   - How did you fix it?
   - What did you learn?

Example PR description:
```
## File Fixed
python/01_missing_colon.py

## Error Found
Missing colon after function definition

## Fix Applied
Added colon after `def greet(name)` on line 2

## What I Learned
Python requires a colon after function definitions to indicate the start of the function body.
```

## 📋 Rules and Guidelines

1. **One file per PR** - Fix only one file per pull request
2. **One PR per person per file** - Don't fix files that already have open PRs
3. **Test your fix** - Make sure the program runs without errors
4. **Explain your fix** - Help others learn by explaining what you fixed
5. **Use descriptive branch names** - Follow the naming convention
6. **Keep original comments** - Don't remove the hint comments

## 🏆 Contribution Tips

- Start with easier files (01-10) if you're a beginner
- Try different languages to broaden your skills
- Review others' PRs to learn different approaches
- Ask questions in PR comments if you're unsure

## 🔍 Common Error Types You'll Find

- Syntax errors (missing semicolons, colons, brackets)
- Logic errors (infinite loops, wrong operators)
- Runtime errors (division by zero, array bounds, null pointers)
- Memory issues (leaks, dangling pointers)
- Type errors (wrong casting, format specifiers)
- OOP issues (access modifiers, inheritance, constructors)

## 📚 Resources

### Python
- [Python Documentation](https://docs.python.org/3/)
- [Python Tutorial](https://www.w3schools.com/python/)

### C
- [C Programming Tutorial](https://www.learn-c.org/)
- [C Reference](https://en.cppreference.com/w/c)

### C++
- [C++ Documentation](https://en.cppreference.com/w/)
- [C++ Tutorial](https://www.learncpp.com/)

### Java
- [Java Documentation](https://docs.oracle.com/en/java/)
- [Java Tutorial](https://www.w3schools.com/java/)

## ❓ Need Help?

- Check the file name - it hints at the error type
- Read the comment at the top of each file
- Try compiling/running the program to see the error message
- Search for the error message online
- Ask in the PR comments

## 🎓 Learning Objectives

By completing these exercises, you will:
- Improve debugging skills
- Learn common programming mistakes
- Practice Git workflow (branch, commit, PR)
- Understand error messages better
- Gain experience with code review

Happy debugging! 🐛🔧
