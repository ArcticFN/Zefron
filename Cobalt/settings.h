#pragma once

enum class ECobaltUsage
{
	Private,
	Hybrid,
	// RecordingRequests // todo?
};

#define URL_PROTOCOL "http"
#define URL_HOST "158.180.32.254"
#define URL_PORT "3551"

constexpr static ECobaltUsage CobaltUsage = ECobaltUsage::Private;