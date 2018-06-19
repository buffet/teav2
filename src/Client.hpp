//
// Copyright Aliaksei Levin (levlam@telegram.org), Arseny Smirnov (arseny30@gmail.com) 2014-2018
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#include <td/telegram/Client.h>
#include <td/telegram/Log.h>
#include <td/telegram/td_api.h>
#include <td/telegram/td_api.hpp>

#include <cstdint>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <sstream>
#include <string>
#include <vector>

// Simple single-threaded example of TDLib usage.
// Real world programs should use separate thread for the user input.
// Example includes user authentication, receiving updates, getting chat list and sending text messages.

namespace teav2 {
	namespace td_api = td::td_api;

	class Client {
	public:
		Client();

		void loop();

	private:
		using Object = td_api::object_ptr<td_api::Object>;
		std::unique_ptr<td::Client> client_;

		td_api::object_ptr<td_api::AuthorizationState> authorization_state_;
		bool are_authorized_{false};
		bool need_restart_{false};
		std::uint64_t current_query_id_{0};
		std::uint64_t authentication_query_id_{0};

		std::map<std::uint64_t, std::function<void(Object)>> handlers_;

		std::map<std::int32_t, td_api::object_ptr<td_api::user>> users_;

		std::map<std::int64_t, std::string> chat_title_;

		void restart();

		void send_query(td_api::object_ptr<td_api::Function> f, std::function<void(Object)> handler);

		void process_response(td::Client::Response response);

		std::string get_user_name(std::int32_t user_id);

		void process_update(td_api::object_ptr<td_api::Object> update);

		std::function<void(Object)> create_authentication_query_handler();

		void on_authorization_state_update(); 

		void check_authentication_error(Object object);

		std::uint64_t next_query_id();
	};
}
