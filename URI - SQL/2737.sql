(
SELECT lawyers.name, lawyers.customers_number
FROM lawyers
ORDER BY lawyers.customers_number DESC
LIMIT 1
)
UNION ALL
(
SELECT lawyers.name, lawyers.customers_number
FROM lawyers
ORDER BY lawyers.customers_number ASC
LIMIT 1
)
UNION ALL
(
SELECT 'Average' as name, CAST(AVG(customers_number) AS INT)
FROM lawyers
)

-- () são necessários no UNION ALL
