# Contributing Guidelines

Thank you for participating in this debugging practice exercise!

## Quick Start Checklist

- [ ] Fork the repository
- [ ] Clone your fork locally
- [ ] Create a new branch with format: `yourname-language-filenumber`
- [ ] Fix ONE file only
- [ ] Test that your fix works
- [ ] Commit with a clear message
- [ ] Push to your fork
- [ ] Create a Pull Request with detailed explanation

## Branch Naming Convention

**Format:** `yourname-language-filenumber`

**Examples:**
- `alice-python-01`
- `bob-c-15`
- `charlie-cpp-23`
- `diana-java-30`

## Commit Message Format

**Format:** `Fix: [Language] File #XX - Brief description`

**Examples:**
- `Fix: [Python] File #01 - Added missing colon in function definition`
- `Fix: [C] File #07 - Added check for division by zero`
- `Fix: [C++] File #14 - Added delete to prevent memory leak`
- `Fix: [Java] File #09 - Changed == to .equals() for string comparison`

## Pull Request Template

When creating your PR, use this template:

```markdown
## File Fixed
[language]/[filename]

## Error Found
[Describe what was wrong]

## Fix Applied
[Describe what you changed]

## Testing Done
[Explain how you tested the fix]

## What I Learned
[Share your learning experience]
```

## Example Pull Request

```markdown
## File Fixed
python/08_division_by_zero.py

## Error Found
The function attempts to divide by zero without any error handling, causing a ZeroDivisionError at runtime.

## Fix Applied
Added an if statement to check if the divisor is zero before performing division. If zero, the function now returns None and prints an error message.

## Testing Done
- Tested with divide(10, 0) - returns None with error message
- Tested with divide(10, 2) - returns 5.0 correctly
- Tested with divide(0, 5) - returns 0.0 correctly

## What I Learned
Always validate input parameters, especially for mathematical operations. Division by zero is a common runtime error that should be handled gracefully.
```

## Code of Conduct

1. **Be respectful** - Everyone is learning
2. **Be helpful** - Share knowledge in PR comments
3. **Be patient** - Reviews may take time
4. **Be honest** - Don't copy solutions, learn by doing
5. **Be collaborative** - Help others if you see questions

## What NOT to Do

❌ Don't fix multiple files in one PR
❌ Don't modify files that aren't broken
❌ Don't remove the hint comments
❌ Don't submit untested code
❌ Don't copy solutions from others
❌ Don't create PRs for files with existing open PRs

## What TO Do

✅ Fix one file per PR
✅ Test your solution thoroughly
✅ Write clear commit messages
✅ Explain your fix in the PR description
✅ Ask questions if you're stuck
✅ Review and learn from others' PRs
✅ Share what you learned

## Review Process

Your PR will be reviewed for:
1. **Correctness** - Does it fix the error?
2. **Completeness** - Does the program run successfully?
3. **Code quality** - Is the fix appropriate?
4. **Documentation** - Is the PR well explained?

## Getting Your PR Merged

To increase chances of quick approval:
- Follow all guidelines above
- Test thoroughly before submitting
- Write clear explanations
- Respond to review comments promptly
- Be open to suggestions

## Questions?

If you have questions:
1. Check the README.md first
2. Look at merged PRs for examples
3. Ask in your PR comments
4. Search online for the error type

Happy coding! 🚀
