-- 코드를 입력하세요
SELECT AO.ANIMAL_ID, AO.NAME
from ANIMAL_OUTS AO
left join ANIMAL_INS AI on AO.ANIMAL_ID = AI.ANIMAL_ID
where AI.ANIMAL_ID is null
order by AO.ANIMAL_ID ASC;
