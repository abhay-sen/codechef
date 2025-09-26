import itertools

def min_operations(s):
    perms = itertools.permutations(['R', 'G', 'B'])
    min_changes = float('inf')
    for p in perms:
        changes = 0
        for i, c in enumerate(s):
            if c != p[i % 3]:
                changes += 1
        if changes < min_changes:
            min_changes = changes
    return min_changes

s = input().strip()
print(min_operations(s))