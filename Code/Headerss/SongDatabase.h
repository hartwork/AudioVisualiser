#pragma once
#include <string>
#include <vector>

class SongDatabase
{
public:
	void add_song(const std::string& path);
	void del_song(const std::string& path);
	int get_size();
	void load_song(const std::string& path);
	std::string get_song_at(int index);
	void clear();
private:
	bool file_existence(const std::string& name);
	std::vector<std::string> database;
	const std::string path = "Resources/Songs/";
};

