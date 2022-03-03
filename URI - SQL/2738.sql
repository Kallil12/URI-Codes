SELECT candidate.name, ROUND((math*0.2 + specific*0.3 + project_plan*0.5),2) AS avg_score
FROM candidate
INNER JOIN score ON score.candidate_id = candidate.id
ORDER BY avg_score DESC
