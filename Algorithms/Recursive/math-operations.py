def penambahan(numbers, index=0):
    if index >= len(numbers):
        return 0

    return numbers[index] + penambahan(numbers, index + 1)


def pengurangan(numbers, index=0):
    if index >= len(numbers):
        return 0

    return numbers[index] - pengurangan(numbers, index + 1)


def pembagian(numbers, index=0):
    if index >= len(numbers):
        return 1

    if numbers[index] == 0:
        return 0

    return numbers[index] / pembagian(numbers, index + 1)


def sisa_bagi(numbers, index=0):
    if index >= len(numbers):
        return 1

    if numbers[index] == 0:
        return 0

    return numbers[index] % sisa_bagi(numbers, index + 1)


numbers = [10, 2, 3, 4, 5]

hasil_penambahan = penambahan(numbers)
print("Hasil penambahan:", hasil_penambahan)

# hasil_pengurangan = pengurangan(numbers)
# print("Hasil pengurangan:", hasil_pengurangan)

# hasil_pembagian = pembagian(numbers)
# print("Hasil pembagian:", hasil_pembagian)

# hasil_sisa_bagi = sisa_bagi(numbers)
# print("Hasil sisa bagi:", hasil_sisa_bagi)
