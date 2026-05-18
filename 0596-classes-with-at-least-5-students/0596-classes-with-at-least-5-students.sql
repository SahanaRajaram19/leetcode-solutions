with final as
(
select distinct(class) as class, count(student) as student
from courses group by class having count(student)>=5
)

select distinct(c.class)
from courses as c join final as f
on c.class=f.class  ;
