char	num_to_ch(int n)
{
	if (n >= 0 && n <= 15)
		return ("0123456789abcdef"[n]);
	return ('!');
}

char	num_to_ch_upper(int n)
{
	if (n >= 0 && n <= 15)
		return ("0123456789ABCDEF"[n]);
	return ('!');
}
