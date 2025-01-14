/*
 *  ======== xdcArgParser.xs ========
 */

/*
 *  ======== getDeviceWareOpts========
 *  Parses XDCARGS returning an object with paths to device *wares.
 */
function getDeviceWareOpts(xdcArgs)
{
    /* Get paths from XDCARGS options */
    var argMap = parseArgs(xdcArgs);

    return ({
        "cc26x4ware": argMap["cc26x4ware"],
        "cc26xxware": argMap["cc26xxware"],
        "cc32xxware": argMap["cc32xxware"]
    });
}

/* Returns a JSON map object of XDCARGS */
function parseArgs(xdcArgs) {
    var argMap = {};

    /* Parse product versions from XDCARGS options */
    for each (var arg in xdcArgs.split(" ")) {
        if (arg.split('=').length < 2) {
            /* skip undefined arguments */
            continue;
        }

        var path = String(arg.split("=").pop());

        if (arg.match(/^CC26X4WARE=/)) {
            argMap["cc26x4ware"] = path;
        }

        if (arg.match(/^CC26XXWARE=/)) {
            argMap["cc26xxware"] = path;
        }

        if (arg.match(/^CC32XXWARE=/)) {
            argMap["cc32xxware"] = path;
        }
    }

    return argMap;
}
