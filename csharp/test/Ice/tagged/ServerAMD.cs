//
// Copyright (c) ZeroC, Inc. All rights reserved.
//

using Test;

namespace ZeroC.Ice.Test.Tagged
{
    public class ServerAMD : TestHelper
    {
        public override void Run(string[] args)
        {
            using var communicator = Initialize(ref args);
            communicator.SetProperty("TestAdapter.Endpoints", GetTestEndpoint(0));
            var adapter = communicator.CreateObjectAdapter("TestAdapter");
            adapter.Add("initial", new InitialAsync());
            adapter.Activate();
            ServerReady();
            communicator.WaitForShutdown();
        }

        public static int Main(string[] args) => TestDriver.RunTest<ServerAMD>(args);
    }
}