#ifndef __BACKPORT_LINUX_HDMI_H
#define __BACKPORT_LINUX_HDMI_H
#include_next <linux/hdmi.h>

#include <linux/version.h>

#ifndef HDMI_INFOFRAME_SIZE
#define HDMI_INFOFRAME_SIZE(type)	\
	(HDMI_INFOFRAME_HEADER_SIZE + HDMI_ ## type ## _INFOFRAME_SIZE)
#endif

#endif /* __BACKPORT_LINUX_HDMI_H */
