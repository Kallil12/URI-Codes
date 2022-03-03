SELECT categories.name,
       SUM(amount)
FROM products
INNER JOIN categories ON categories.id = products.id_categories
GROUP BY categories.name
