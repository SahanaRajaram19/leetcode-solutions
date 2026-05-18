SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
FROM Activity where datediff('2019-07-27',activity_date) between 0 and 29
group by activity_date;