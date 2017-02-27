static bool bufferd_notification(u8 id)
{
	bool result = false;
	if(id < 20 && m_UI_buff[id].used)
	{
		m_UI_buff[id].used = false;
		m_UI_buff[id].handler = NULL;
		result = true;
	}
	return result;
}
