SELECT products.name, providers.name, categories.name
FROM products
JOIN providers ON providers.id = products.id_providers
JOIN categories ON products.id_categories = categories.id
WHERE (providers.name LIKE 'Sansul%' AND categories.name LIKE 'Imported%')
