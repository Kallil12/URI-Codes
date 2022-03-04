SELECT products.name, providers.name, products.price
FROM products
JOIN providers ON providers.id = products.id_providers
JOIN categories ON products.id_categories = categories.id
WHERE (products.price > 1000 AND categories.name ILIKE 'Super Lux%')
