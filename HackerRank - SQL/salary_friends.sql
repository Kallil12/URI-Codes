SELECT s.name AS NAME
FROM Students s
JOIN Friends f ON f.ID = s.ID
JOIN Packages p ON s.ID = p.ID
JOIN Packages p2 ON f.friend_id = p2.ID
WHERE p2.Salary > p.Salary
ORDER BY p2.Salary
