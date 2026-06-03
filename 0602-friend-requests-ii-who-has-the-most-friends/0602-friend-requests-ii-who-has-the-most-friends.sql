select id,count(id) as num
from (select accepter_id as id from requestaccepted
union all
select requester_id as id from requestaccepted)
temp
group by id
order by num desc
limit 1;
