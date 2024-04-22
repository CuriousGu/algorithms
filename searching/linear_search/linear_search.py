from typing import List


# The array does not need to be sorted
def search(arr: List, target: int) -> int:

    for index, v in enumerate(arr):
        if target == v:
            return index

    return None
