function square_of_sum(n)
    return convert(Int64, ((n * (n + 1)) / 2) ^ 2)
end

function sum_of_squares(n)
    return convert(Int64, (n * (n + 1) * (2 * n + 1)) / 6)
end

function difference(n)
    return convert(Int64, square_of_sum(n) - sum_of_squares(n))
end
