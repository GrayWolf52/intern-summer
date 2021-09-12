/*
#include "GSIntro.h"
#include "GSMenu.h"
*/
#include "GSPlay.h"
#include "GSIntro.h"
#include "GSMenu.h"
#include "../GSCredit.h"
#include "GameStatebase.h"
#include"GSTemp.h"
#include"GSSetting.h"
#include"GSScore.h"


GameStateBase::GameStateBase(StateType stateType) : m_stateType(stateType)
{}

std::shared_ptr<GameStateBase> GameStateBase::CreateState(StateType stt)
{
	std::shared_ptr<GameStateBase> gs = nullptr;
	switch (stt)
	{
	case StateType::STATE_INVALID:
		break;
	case StateType::STATE_INTRO:
		gs = std::make_shared<GSIntro>();
		break;
	case StateType::STATE_MENU:
		gs = std::make_shared<GSMenu>();
		break;
	case StateType::STATE_PLAY:
		gs = std::make_shared<GSPlay>();
		break;
	case StateType::STATE_CREDIT:
		gs = std::make_shared<GSCredit>();
		break;
	case StateType::STATE_PAUSE:
		gs = std::make_shared<GSTemp>();
		break;
	case StateType::STATE_SETTING:
		gs = std::make_shared<GSSetting>();
		break;
	case StateType::STATE_HIGHSCORE:
		gs = std::make_shared<GSScore>();
		break;
	default:
		break;
	}
	return gs;
}

StateType GameStateBase::GetGameStateType()
{
	return m_stateType;
}