def sort(arr: list, b: int = 0, e: int = None) -> list:
    e = len(arr)-1 if not e and e != 0 else e

    if b < e:
        pivot = arr[e]
        p = b
        for j in range(b, e):
            if arr[j] <= pivot:
                arr[j], arr[p] = arr[p], arr[j]
                p += 1
        arr[p], arr[e] = arr[e], arr[p]
        sort(arr, b, p-1)
        sort(arr, p+1, e)

    return arr
