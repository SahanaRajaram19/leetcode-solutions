select e1.name
from employee as e1 join employee as m1 on e1.id=m1.managerId
group by e1.id,m1.managerId having count(m1.managerId) >= 5;
