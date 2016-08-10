#ifndef __LIVE_STREAM_COMMON_H__
#define __LIVE_STREAM_COMMON_H__


/*
*	Return Code
*/

#define MO_STATE_ERR    -1
#define MO_STATE_OK	     0         
#define MO_STATE_SUCCESS 0     

#define MO_VCODEC_ERR   -1002       //<< ������ƵCodecʧ��
#define MO_ACODEC_ERR   -1003       //<< ������ƵCodecʧ��
#define MO_SESSION_ERR  -1004       //<< �����Ựʧ��
#define MO_CONNECT_ERR  -1005       //<< ����ʧ��
#define MO_SEND_PKT_ERR -1006       //<< ����ʧ��

/*
*	Record
*/
#define MO_RECORD_TYPE_MP4 2001
#define MO_RECORD_TYPE_FLV 2002
#define MO_RECORD_TYPE_AVI 2003
#define MO_RECORD_ERR     -2001       //<< ¼��ʧ��

/*
*	MediaCodecType
*/
#define MO_VIDEO_TYPE_H264 96
#define MO_AUDIO_TYPE_AAC  107       

/*
*	Other
*/
#define MO_WATER_MARK_NONE   1001    //<< ��
#define MO_WATER_MARK_MIRROR 1002    //<< ����

#define MO_STREAM_INFO_FPS     3001  //<< ʵʱ֡��
#define MO_STREAM_INFO_BITRATE 3002  //<< ʵʱ����
#define MO_STREAM_INFO_SPEED   3003  //<< ʵʱ����
#define MO_STREAM_INFO_AR      3004  //<< ʵʱ�ֱ���

#endif