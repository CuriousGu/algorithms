from typing import List


def sort(arr: List) -> List:

    for _ in range(len(arr)-1):
        for index, value in enumerate(arr[:-1]):
            if value >= arr[index+1]:
                arr[index+1], arr[index] = arr[index], arr[index+1]

    return arr
