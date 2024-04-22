async function cookieValidator (cookies) {
    try {
        await ValidateCookie(cookies.testCookie)
    } catch {
        throw new Error('Invalid cookies')
    }
}
