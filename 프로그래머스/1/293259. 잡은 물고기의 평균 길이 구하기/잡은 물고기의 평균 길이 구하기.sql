-- 코드를 작성해주세요
select round(AVG(coalesce(LENGTH,10)),2) AS AVERAGE_LENGTH
from FISH_INFO

