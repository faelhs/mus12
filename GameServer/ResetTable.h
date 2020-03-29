#include "User.h"

#define MAX_RESET_TABLE 64

#define FILE_RESETTABLE "\\Custom\\ResetTable.txt"

struct RESET_TABLE_INFO
{
	int MinReset;
	int MaxReset;
	int Point;
};

class CResetTable
{
public:
	CResetTable();
	virtual ~CResetTable();
	void Load(char* path);
	int GetResetPoint(LPOBJ lpObj);
	void SetInfo(RESET_TABLE_INFO info);
private:
	RESET_TABLE_INFO m_ResetTableInfo[MAX_RESET_TABLE];
	int m_count;
};

extern CResetTable gResetTable;
