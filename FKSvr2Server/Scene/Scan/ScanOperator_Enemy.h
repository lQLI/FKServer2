/////////////////////////////////////////////////////////////////////////////////
//�ļ�����
//����������������Χ�ĵ���obj
/////////////////////////////////////////////////////////////////////////////////


#ifndef __SCANOPERATOR_ENEMY_H__
#define __SCANOPERATOR_ENEMY_H__

#include "Type.h"
#include "ScanOperator.h"

class Obj_Monster ;

struct SCANOPERATOR_ENEMY_INIT : public SCANOPERATOR_INIT
{
	Obj_Monster*				m_pMonster ;
	FLOAT						m_fRadius ;

	SCANOPERATOR_ENEMY_INIT( )
	{
		m_pMonster = NULL ;
		m_fRadius = 0.0f ;
	}
};



class Monster_ScanOperator_Enemy : public ScanOperator
{
public :
	Monster_ScanOperator_Enemy( ) ;
	virtual ~Monster_ScanOperator_Enemy( ) ;

	//��ʼ��ɨ�������
	virtual BOOL				Init( SCANOPERATOR_ENEMY_INIT* pInit ) ;
	//ɨ�������ʼǰ�ص�
//	virtual BOOL				On_BeforeScan( ) ;
	//�жϲ����е�Zone�Ƿ���Ҫɨ��
//	virtual BOOL				On_IsNeedScan( ZoneID_t ZoneID ) ;
	//������һ��Obj, ����ֵ�� SCANRETURN
	virtual UINT				On_FindObj( Obj* pObj ) ;
	//ɨ�������ɺ�ص�
//	virtual VOID				On_AfterScan( ) ;


public :
	Obj_Monster*				m_pMonster ;
	FLOAT						m_fRadius ;

};




#endif