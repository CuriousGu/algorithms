from typing import List


def search(arr: List, target: int, b: int = 0, e: int = None) -> int:

    e = len(arr)-1 if not e and e != 0 else e

    if b <= e:
        m = (b + e) // 2
        if arr[m] == target:
            return m
        elif arr[m] < target:
            return search(arr, target, m+1, e)
        else:
            return search(arr, target, b, m-1)

    return None
