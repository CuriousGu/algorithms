from typing import List


def sort(arr: List) -> List:
    if len(arr) > 1:
        half = len(arr) // 2

        first = sort(arr[:half])
        second = sort(arr[half:])

        i = j = k = 0

        while i < len(first) and j < len(second):
            if first[i] <= second[j]:
                arr[k] = first[i]
                i += 1
            else:
                arr[k] = second[j]
                j += 1
            k += 1

        if i < len(first):
            arr = arr[:k] + first[i:]
        elif j < len(second):
            arr = arr[:k] + second[j:]

    return arr
