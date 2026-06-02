# Write your MySQL query statement below
/*select * from users
where mail regexp '^[A-Za-z][a-zA-Z0-9_.-]*@leetcode\\.com$';
*/
SELECT *
FROM Users
WHERE REGEXP_LIKE(
    mail,
    '^[A-Za-z][A-Za-z0-9_.-]*@leetcode\\.com$',
    'c'
);