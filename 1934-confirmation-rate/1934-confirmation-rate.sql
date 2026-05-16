with calculated as(
select user_id, count(user_id) as totalrequest,
 sum(case when action= 'confirmed' then 1 else  0 end) as confirmed_message
 from Confirmations group by user_id)

 select s.user_id, ifnull(round((confirmed_message *1.00/totalrequest) ,2),0) as confirmation_rate
 from signups as s left join calculated as c on s.user_id=c.user_id;