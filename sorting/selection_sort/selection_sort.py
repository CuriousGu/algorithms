from typing import List


def sort(arr: List) -> List:
    j = 0

    while j < len(arr) - 1:
        index_lower, i = j, j
        while i < len(arr):
            if arr[i] < arr[index_lower]:
                index_lower = i
            i += 1

        arr[j], arr[index_lower] = arr[index_lower], arr[j]
        j += 1

    return arr
