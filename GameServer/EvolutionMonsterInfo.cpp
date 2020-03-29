#include "stdafx.h"
#include "EvolutionMonsterInfo.h"
#include "user.h"

CEvolutionMonsterInfo::CEvolutionMonsterInfo()
{
	this->m_Score = 0;
	this->m_EvoMonLevel = 0;
	this->m_EvoMonIndex = -1;
	this->m_EvoMonLevel = -1;
}


CEvolutionMonsterInfo::~CEvolutionMonsterInfo()
{

}

void CEvolutionMonsterInfo::Clear()
{
	if (this->m_EvoMonIndex != -1)
	{
		gObjDel(this->m_EvoMonIndex);
		this->m_EvoMonIndex = -1;
	}

	if (this->m_FieldIndex != -1)
	{
		gObjDel(this->m_FieldIndex);
		this->m_FieldIndex = -1;
	}

	this->m_State = EVOMON_NOT_ACTIVE;
	this->m_Score = 0;
	this->m_EvoMonLevel = 0;
}

void CEvolutionMonsterInfo::Init()
{
	if (this->m_EvoMonIndex != -1)
	{
		gObjDel(this->m_EvoMonIndex);
		this->m_EvoMonIndex = -1;
	}

	if (this->m_FieldIndex != -1)
	{
		gObjDel(this->m_FieldIndex);
		this->m_FieldIndex = -1;
	}

	this->m_State = EVOMON_NOT_ACTIVE;
	this->m_nMaxScore = 0;
	this->m_Score = 0;
	this->m_nTotalDamage = 0;
	this->m_EvoMonLevel = 0;
}
