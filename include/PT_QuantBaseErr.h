#ifndef __PT_QUANT_BASE_ERR_H__
#define __PT_QUANT_BASE_ERR_H__

#ifndef PT_QUANTBASEAPI_NAMESPACE
#define PT_QUANTBASEAPI_NAMESPACE
#define PT_QUANTBASEAPI_NAMESPACE_BEGIN    namespace PT_QuantPlatform {
#define PT_QUANTBASEAPI_NAMESPACE_END      }
#define USE_PT_QUANTBASEAPI_NAMESPACE      using namespace PT_QuantPlatform;
#endif /* PT_QUANTBASEAPI_NAMESPACE */

#include <stdint.h>

PT_QUANTBASEAPI_NAMESPACE_BEGIN

/* �������׽ӿڹ��������� */
typedef long TQuantErrorType;
typedef enum
{
	/* Ĭ�ϴ��� */
	/* ͨ�Ų������: (-100) - (-1) */

	EQuantErrorType_None = 0,                    /* ִ������, û�д��� */

	/* quantplusϵͳƽ̨����: 1-99 */
	EQuantErrorType_NotConnect = 1,              /* ������δ��ͨ */
	EQuantErrorType_ParamInvalid = 2,            /* ָ��������Ч */
	EQuantErrorType_LimitFunction = 3,           /* ָ���������� */
	EQuantErrorType_HttpServerConnectError,      /* http����������ʧ��*/
	EQuantErrorType_HttpRequestError,            /* http����ʧ�� */
	EQuantErrorType_ParseError,                  /* ͨ�Ű�����ʧ�� */
	EQuantErrorType_SerializeError,              /* ͨ�Ű����ʧ�� */
	EQuantErrorType_NoTavailableFuction,         //�ݲ�֧�ִ˺���
	EQuantErrorType_Logout,                      //δ��¼
	EQuantErrorType_AppServerDisconnect,         //ҵ��������ѶϿ�


	/* �������: 100-199 */

	/* ���״���: 200-299 */
	EQuantErrorType_TooHighFrequency = 200,             //ָ��̫Ƶ��
	EQuantErrorType_OrderNotFound,                      //�޴˶���
	EQuantErrorType_NotTradingTime,                     //�ǽ���ʱ��
	EQuantErrorType_OverHighOrLow,                      //�����ǵ�ͣ��
	EQuantErrorType_InvalidVol,                         //�Ƿ�ί����
	EQuantErrorType_Cannotselfdeal,                     //�޷��Գɽ�
	EQuantErrorType_CannotWithDrawn,                    //�޷�����(�����Ѿ������ս�״̬)
	EQuantErrorType_NotEnoughLendingAmoutOrCaptial,     //û���㹻��ȯ��Ǯ
	EQuantErrorType_StopTrade,                          //ͣ��
	EQuantErrorType_NoSuchTradeType,                    //�޴˽�������
	EQuantErrorType_RiskCantTrade,                      //����޷����ֽ���
	EQuantErrorType_StrategyRiskCantWithDrawn,          //����ǿƽ�޷�����
	EQuantErrorType_WithoutthisAuthority,               //�޴�Ȩ��
	EQuantErrorType_InvalidCode,                        //�Ƿ�֤ȯ����
	EQuantErrorType_NoPisitionToClose,                  //�޲ֿ���ƽ
	EQuantErrorType_InvalidAction,                      //�쳣����
	EQuantErrorType_NotSetTestBack,                     //δ���ûز��ʽ��˺ţ����������µ�
	EQuantErrorType_NotAvailableAccount,                //�����õ��ʽ��˺�

	// QuantApi: 600-800
	EQuantErrorType_MDNotConnect = 600,               // ��δ�������������
	EQuantErrorType_TDNotConnect,                     // ��δ���ӽ��׷�����
	EQuantErrorType_MDNotAvaliable,                   // �޷�����ʹ������
	EQuantErrorType_TDNotAvaliable,                   // �޷�����ʹ�ý���

} EQuantErrorType;

PT_QUANTBASEAPI_NAMESPACE_END

#endif /* __PT_QUANT_BASE_ERR_H__ */