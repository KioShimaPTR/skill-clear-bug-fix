//Search:

	PointChange(POINT_SKILL, 4 + (GetLevel() - 5) - GetPoint(POINT_SKILL));

//Add below

	if (GetJob() == JOB_WARRIOR)
	{
		RemoveAffect(SKILL_JEONGWI);
		RemoveAffect(SKILL_GEOMKYUNG);
		RemoveAffect(SKILL_CHUNKEON);
	}
	else if (GetJob() == JOB_ASSASSIN)
		RemoveAffect(SKILL_GYEONGGONG);
	else if (GetJob() == JOB_SURA)
	{
		RemoveAffect(SKILL_GWIGEOM);
		RemoveAffect(SKILL_TERROR);
		RemoveAffect(SKILL_JUMAGAP);
		RemoveAffect(SKILL_MANASHILED);
	}
	else if (GetJob() == JOB_SHAMAN)
	{
		RemoveAffect(SKILL_HOSIN);
		RemoveAffect(SKILL_REFLECT);
		RemoveAffect(SKILL_GICHEON);
		RemoveAffect(SKILL_KWAESOK);
		RemoveAffect(SKILL_JEUNGRYEOK);
	}

/**** Fixed Bahadýr Bozdað || Cosby || Kioshima ****/